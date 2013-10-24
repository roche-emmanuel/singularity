#include <plug_common.h>

class luna_wrapper_b2Position {
public:
	typedef Luna< b2Position > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,79848895) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Position*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2Position* rhs =(Luna< b2Position >::check(L,2));
		b2Position* self=(Luna< b2Position >::check(L,1));
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

		b2Position* self= (b2Position*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2Position >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,79848895) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< b2Position >::check(L,1));
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

		b2Position* self=(Luna< b2Position >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Position");
		
		return luna_dynamicCast(L,converters,"b2Position",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getC(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setC(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2Vec2 b2Position::c()
	static int _bind_getC(lua_State *L) {
		if (!_lg_typecheck_getC(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Position::c() function, expected prototype:\nb2Vec2 b2Position::c()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Position* self=(Luna< b2Position >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2Position::c(). Got : '%s'\n%s",typeid(Luna< b2Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->c;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2Position::a()
	static int _bind_getA(lua_State *L) {
		if (!_lg_typecheck_getA(L)) {
			luaL_error(L, "luna typecheck failed in float b2Position::a() function, expected prototype:\nfloat b2Position::a()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Position* self=(Luna< b2Position >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2Position::a(). Got : '%s'\n%s",typeid(Luna< b2Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->a;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Position::c(b2Vec2 value)
	static int _bind_setC(lua_State *L) {
		if (!_lg_typecheck_setC(L)) {
			luaL_error(L, "luna typecheck failed in void b2Position::c(b2Vec2 value) function, expected prototype:\nvoid b2Position::c(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2Position::c function");
		}
		b2Vec2 value=*value_ptr;

		b2Position* self=(Luna< b2Position >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Position::c(b2Vec2). Got : '%s'\n%s",typeid(Luna< b2Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->c = value;

		return 0;
	}

	// void b2Position::a(float value)
	static int _bind_setA(lua_State *L) {
		if (!_lg_typecheck_setA(L)) {
			luaL_error(L, "luna typecheck failed in void b2Position::a(float value) function, expected prototype:\nvoid b2Position::a(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2Position* self=(Luna< b2Position >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Position::a(float). Got : '%s'\n%s",typeid(Luna< b2Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->a = value;

		return 0;
	}


	// Operator binds:

};

b2Position* LunaTraits< b2Position >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2Position >::_bind_dtor(b2Position* obj) {
	delete obj;
}

const char LunaTraits< b2Position >::className[] = "b2Position";
const char LunaTraits< b2Position >::fullName[] = "b2Position";
const char LunaTraits< b2Position >::moduleName[] = "box2d";
const char* LunaTraits< b2Position >::parents[] = {0};
const int LunaTraits< b2Position >::hash = 79848895;
const int LunaTraits< b2Position >::uniqueIDs[] = {79848895,0};

luna_RegType LunaTraits< b2Position >::methods[] = {
	{"getC", &luna_wrapper_b2Position::_bind_getC},
	{"getA", &luna_wrapper_b2Position::_bind_getA},
	{"setC", &luna_wrapper_b2Position::_bind_setC},
	{"setA", &luna_wrapper_b2Position::_bind_setA},
	{"dynCast", &luna_wrapper_b2Position::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Position::_bind___eq},
	{"fromVoid", &luna_wrapper_b2Position::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2Position::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2Position >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Position >::enumValues[] = {
	{0,0}
};


