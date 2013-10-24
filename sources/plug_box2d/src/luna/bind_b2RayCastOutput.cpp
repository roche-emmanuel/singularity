#include <plug_common.h>

class luna_wrapper_b2RayCastOutput {
public:
	typedef Luna< b2RayCastOutput > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78839054) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2RayCastOutput*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2RayCastOutput* rhs =(Luna< b2RayCastOutput >::check(L,2));
		b2RayCastOutput* self=(Luna< b2RayCastOutput >::check(L,1));
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

		b2RayCastOutput* self= (b2RayCastOutput*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2RayCastOutput >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78839054) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< b2RayCastOutput >::check(L,1));
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

		b2RayCastOutput* self=(Luna< b2RayCastOutput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2RayCastOutput");
		
		return luna_dynamicCast(L,converters,"b2RayCastOutput",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFraction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFraction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2Vec2 b2RayCastOutput::normal()
	static int _bind_getNormal(lua_State *L) {
		if (!_lg_typecheck_getNormal(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2RayCastOutput::normal() function, expected prototype:\nb2Vec2 b2RayCastOutput::normal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2RayCastOutput* self=(Luna< b2RayCastOutput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2RayCastOutput::normal(). Got : '%s'\n%s",typeid(Luna< b2RayCastOutput >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->normal;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2RayCastOutput::fraction()
	static int _bind_getFraction(lua_State *L) {
		if (!_lg_typecheck_getFraction(L)) {
			luaL_error(L, "luna typecheck failed in float b2RayCastOutput::fraction() function, expected prototype:\nfloat b2RayCastOutput::fraction()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2RayCastOutput* self=(Luna< b2RayCastOutput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2RayCastOutput::fraction(). Got : '%s'\n%s",typeid(Luna< b2RayCastOutput >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->fraction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2RayCastOutput::normal(b2Vec2 value)
	static int _bind_setNormal(lua_State *L) {
		if (!_lg_typecheck_setNormal(L)) {
			luaL_error(L, "luna typecheck failed in void b2RayCastOutput::normal(b2Vec2 value) function, expected prototype:\nvoid b2RayCastOutput::normal(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2RayCastOutput::normal function");
		}
		b2Vec2 value=*value_ptr;

		b2RayCastOutput* self=(Luna< b2RayCastOutput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2RayCastOutput::normal(b2Vec2). Got : '%s'\n%s",typeid(Luna< b2RayCastOutput >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->normal = value;

		return 0;
	}

	// void b2RayCastOutput::fraction(float value)
	static int _bind_setFraction(lua_State *L) {
		if (!_lg_typecheck_setFraction(L)) {
			luaL_error(L, "luna typecheck failed in void b2RayCastOutput::fraction(float value) function, expected prototype:\nvoid b2RayCastOutput::fraction(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2RayCastOutput* self=(Luna< b2RayCastOutput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2RayCastOutput::fraction(float). Got : '%s'\n%s",typeid(Luna< b2RayCastOutput >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->fraction = value;

		return 0;
	}


	// Operator binds:

};

b2RayCastOutput* LunaTraits< b2RayCastOutput >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2RayCastOutput >::_bind_dtor(b2RayCastOutput* obj) {
	delete obj;
}

const char LunaTraits< b2RayCastOutput >::className[] = "b2RayCastOutput";
const char LunaTraits< b2RayCastOutput >::fullName[] = "b2RayCastOutput";
const char LunaTraits< b2RayCastOutput >::moduleName[] = "box2d";
const char* LunaTraits< b2RayCastOutput >::parents[] = {0};
const int LunaTraits< b2RayCastOutput >::hash = 78839054;
const int LunaTraits< b2RayCastOutput >::uniqueIDs[] = {78839054,0};

luna_RegType LunaTraits< b2RayCastOutput >::methods[] = {
	{"getNormal", &luna_wrapper_b2RayCastOutput::_bind_getNormal},
	{"getFraction", &luna_wrapper_b2RayCastOutput::_bind_getFraction},
	{"setNormal", &luna_wrapper_b2RayCastOutput::_bind_setNormal},
	{"setFraction", &luna_wrapper_b2RayCastOutput::_bind_setFraction},
	{"dynCast", &luna_wrapper_b2RayCastOutput::_bind_dynCast},
	{"__eq", &luna_wrapper_b2RayCastOutput::_bind___eq},
	{"fromVoid", &luna_wrapper_b2RayCastOutput::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2RayCastOutput::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2RayCastOutput >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2RayCastOutput >::enumValues[] = {
	{0,0}
};


