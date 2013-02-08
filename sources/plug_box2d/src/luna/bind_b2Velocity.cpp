#include <plug_common.h>

class luna_wrapper_b2Velocity {
public:
	typedef Luna< b2Velocity > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85114450) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Velocity*)");
		}

		b2Velocity* rhs =(Luna< b2Velocity >::check(L,2));
		b2Velocity* self=(Luna< b2Velocity >::check(L,1));
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

		b2Velocity* self= (b2Velocity*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2Velocity >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85114450) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2Velocity >::check(L,1));
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

		b2Velocity* self=(Luna< b2Velocity >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Velocity");
		
		return luna_dynamicCast(L,converters,"b2Velocity",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getV(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getW(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setV(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setW(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2Vec2 b2Velocity::v()
	static int _bind_getV(lua_State *L) {
		if (!_lg_typecheck_getV(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Velocity::v() function, expected prototype:\nb2Vec2 b2Velocity::v()\nClass arguments details:\n");
		}


		b2Velocity* self=(Luna< b2Velocity >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2Velocity::v(). Got : '%s'",typeid(Luna< b2Velocity >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->v;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2Velocity::w()
	static int _bind_getW(lua_State *L) {
		if (!_lg_typecheck_getW(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Velocity::w() function, expected prototype:\nfloat b2Velocity::w()\nClass arguments details:\n");
		}


		b2Velocity* self=(Luna< b2Velocity >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Velocity::w(). Got : '%s'",typeid(Luna< b2Velocity >::check(L,1)).name());
		}
		float lret = self->w;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Velocity::v(b2Vec2 value)
	static int _bind_setV(lua_State *L) {
		if (!_lg_typecheck_setV(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Velocity::v(b2Vec2 value) function, expected prototype:\nvoid b2Velocity::v(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2Velocity::v function");
		}
		b2Vec2 value=*value_ptr;

		b2Velocity* self=(Luna< b2Velocity >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Velocity::v(b2Vec2). Got : '%s'",typeid(Luna< b2Velocity >::check(L,1)).name());
		}
		self->v = value;

		return 0;
	}

	// void b2Velocity::w(float value)
	static int _bind_setW(lua_State *L) {
		if (!_lg_typecheck_setW(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Velocity::w(float value) function, expected prototype:\nvoid b2Velocity::w(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2Velocity* self=(Luna< b2Velocity >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Velocity::w(float). Got : '%s'",typeid(Luna< b2Velocity >::check(L,1)).name());
		}
		self->w = value;

		return 0;
	}


	// Operator binds:

};

b2Velocity* LunaTraits< b2Velocity >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2Velocity >::_bind_dtor(b2Velocity* obj) {
	delete obj;
}

const char LunaTraits< b2Velocity >::className[] = "b2Velocity";
const char LunaTraits< b2Velocity >::fullName[] = "b2Velocity";
const char LunaTraits< b2Velocity >::moduleName[] = "box2d";
const char* LunaTraits< b2Velocity >::parents[] = {0};
const int LunaTraits< b2Velocity >::hash = 85114450;
const int LunaTraits< b2Velocity >::uniqueIDs[] = {85114450,0};

luna_RegType LunaTraits< b2Velocity >::methods[] = {
	{"getV", &luna_wrapper_b2Velocity::_bind_getV},
	{"getW", &luna_wrapper_b2Velocity::_bind_getW},
	{"setV", &luna_wrapper_b2Velocity::_bind_setV},
	{"setW", &luna_wrapper_b2Velocity::_bind_setW},
	{"dynCast", &luna_wrapper_b2Velocity::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Velocity::_bind___eq},
	{"fromVoid", &luna_wrapper_b2Velocity::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2Velocity::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2Velocity >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Velocity >::enumValues[] = {
	{0,0}
};


