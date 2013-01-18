#include <plug_common.h>

class luna_wrapper_b2RayCastInput {
public:
	typedef Luna< b2RayCastInput > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74209205) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2RayCastInput*)");
		}

		b2RayCastInput* rhs =(Luna< b2RayCastInput >::check(L,2));
		b2RayCastInput* self=(Luna< b2RayCastInput >::check(L,1));
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

		b2RayCastInput* self= (b2RayCastInput*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2RayCastInput >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74209205) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2RayCastInput >::check(L,1));
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

		b2RayCastInput* self=(Luna< b2RayCastInput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2RayCastInput");
		
		return luna_dynamicCast(L,converters,"b2RayCastInput",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getP1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getP2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxFraction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setP1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setP2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxFraction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2Vec2 b2RayCastInput::p1()
	static int _bind_getP1(lua_State *L) {
		if (!_lg_typecheck_getP1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2RayCastInput::p1() function, expected prototype:\nb2Vec2 b2RayCastInput::p1()\nClass arguments details:\n");
		}


		b2RayCastInput* self=(Luna< b2RayCastInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2RayCastInput::p1(). Got : '%s'",typeid(Luna< b2RayCastInput >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->p1;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2RayCastInput::p2()
	static int _bind_getP2(lua_State *L) {
		if (!_lg_typecheck_getP2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2RayCastInput::p2() function, expected prototype:\nb2Vec2 b2RayCastInput::p2()\nClass arguments details:\n");
		}


		b2RayCastInput* self=(Luna< b2RayCastInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2RayCastInput::p2(). Got : '%s'",typeid(Luna< b2RayCastInput >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->p2;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2RayCastInput::maxFraction()
	static int _bind_getMaxFraction(lua_State *L) {
		if (!_lg_typecheck_getMaxFraction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2RayCastInput::maxFraction() function, expected prototype:\nfloat b2RayCastInput::maxFraction()\nClass arguments details:\n");
		}


		b2RayCastInput* self=(Luna< b2RayCastInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2RayCastInput::maxFraction(). Got : '%s'",typeid(Luna< b2RayCastInput >::check(L,1)).name());
		}
		float lret = self->maxFraction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2RayCastInput::p1(b2Vec2 value)
	static int _bind_setP1(lua_State *L) {
		if (!_lg_typecheck_setP1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2RayCastInput::p1(b2Vec2 value) function, expected prototype:\nvoid b2RayCastInput::p1(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2RayCastInput::p1 function");
		}
		b2Vec2 value=*value_ptr;

		b2RayCastInput* self=(Luna< b2RayCastInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2RayCastInput::p1(b2Vec2). Got : '%s'",typeid(Luna< b2RayCastInput >::check(L,1)).name());
		}
		self->p1 = value;

		return 0;
	}

	// void b2RayCastInput::p2(b2Vec2 value)
	static int _bind_setP2(lua_State *L) {
		if (!_lg_typecheck_setP2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2RayCastInput::p2(b2Vec2 value) function, expected prototype:\nvoid b2RayCastInput::p2(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2RayCastInput::p2 function");
		}
		b2Vec2 value=*value_ptr;

		b2RayCastInput* self=(Luna< b2RayCastInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2RayCastInput::p2(b2Vec2). Got : '%s'",typeid(Luna< b2RayCastInput >::check(L,1)).name());
		}
		self->p2 = value;

		return 0;
	}

	// void b2RayCastInput::maxFraction(float value)
	static int _bind_setMaxFraction(lua_State *L) {
		if (!_lg_typecheck_setMaxFraction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2RayCastInput::maxFraction(float value) function, expected prototype:\nvoid b2RayCastInput::maxFraction(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2RayCastInput* self=(Luna< b2RayCastInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2RayCastInput::maxFraction(float). Got : '%s'",typeid(Luna< b2RayCastInput >::check(L,1)).name());
		}
		self->maxFraction = value;

		return 0;
	}


	// Operator binds:

};

b2RayCastInput* LunaTraits< b2RayCastInput >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2RayCastInput >::_bind_dtor(b2RayCastInput* obj) {
	delete obj;
}

const char LunaTraits< b2RayCastInput >::className[] = "b2RayCastInput";
const char LunaTraits< b2RayCastInput >::fullName[] = "b2RayCastInput";
const char LunaTraits< b2RayCastInput >::moduleName[] = "box2d";
const char* LunaTraits< b2RayCastInput >::parents[] = {0};
const int LunaTraits< b2RayCastInput >::hash = 74209205;
const int LunaTraits< b2RayCastInput >::uniqueIDs[] = {74209205,0};

luna_RegType LunaTraits< b2RayCastInput >::methods[] = {
	{"getP1", &luna_wrapper_b2RayCastInput::_bind_getP1},
	{"getP2", &luna_wrapper_b2RayCastInput::_bind_getP2},
	{"getMaxFraction", &luna_wrapper_b2RayCastInput::_bind_getMaxFraction},
	{"setP1", &luna_wrapper_b2RayCastInput::_bind_setP1},
	{"setP2", &luna_wrapper_b2RayCastInput::_bind_setP2},
	{"setMaxFraction", &luna_wrapper_b2RayCastInput::_bind_setMaxFraction},
	{"dynCast", &luna_wrapper_b2RayCastInput::_bind_dynCast},
	{"__eq", &luna_wrapper_b2RayCastInput::_bind___eq},
	{"fromVoid", &luna_wrapper_b2RayCastInput::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2RayCastInput::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2RayCastInput >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2RayCastInput >::enumValues[] = {
	{0,0}
};


