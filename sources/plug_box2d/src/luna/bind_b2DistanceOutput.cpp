#include <plug_common.h>

class luna_wrapper_b2DistanceOutput {
public:
	typedef Luna< b2DistanceOutput > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,57509721) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2DistanceOutput*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2DistanceOutput* rhs =(Luna< b2DistanceOutput >::check(L,2));
		b2DistanceOutput* self=(Luna< b2DistanceOutput >::check(L,1));
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

		b2DistanceOutput* self= (b2DistanceOutput*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2DistanceOutput >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,57509721) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< b2DistanceOutput >::check(L,1));
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

		b2DistanceOutput* self=(Luna< b2DistanceOutput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2DistanceOutput");
		
		return luna_dynamicCast(L,converters,"b2DistanceOutput",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getPointA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPointB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDistance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIterations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPointA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPointB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDistance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIterations(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2Vec2 b2DistanceOutput::pointA()
	static int _bind_getPointA(lua_State *L) {
		if (!_lg_typecheck_getPointA(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2DistanceOutput::pointA() function, expected prototype:\nb2Vec2 b2DistanceOutput::pointA()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2DistanceOutput* self=(Luna< b2DistanceOutput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2DistanceOutput::pointA(). Got : '%s'\n%s",typeid(Luna< b2DistanceOutput >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->pointA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2DistanceOutput::pointB()
	static int _bind_getPointB(lua_State *L) {
		if (!_lg_typecheck_getPointB(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2DistanceOutput::pointB() function, expected prototype:\nb2Vec2 b2DistanceOutput::pointB()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2DistanceOutput* self=(Luna< b2DistanceOutput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2DistanceOutput::pointB(). Got : '%s'\n%s",typeid(Luna< b2DistanceOutput >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->pointB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2DistanceOutput::distance()
	static int _bind_getDistance(lua_State *L) {
		if (!_lg_typecheck_getDistance(L)) {
			luaL_error(L, "luna typecheck failed in float b2DistanceOutput::distance() function, expected prototype:\nfloat b2DistanceOutput::distance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2DistanceOutput* self=(Luna< b2DistanceOutput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2DistanceOutput::distance(). Got : '%s'\n%s",typeid(Luna< b2DistanceOutput >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->distance;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2DistanceOutput::iterations()
	static int _bind_getIterations(lua_State *L) {
		if (!_lg_typecheck_getIterations(L)) {
			luaL_error(L, "luna typecheck failed in signed int b2DistanceOutput::iterations() function, expected prototype:\nsigned int b2DistanceOutput::iterations()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2DistanceOutput* self=(Luna< b2DistanceOutput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed int b2DistanceOutput::iterations(). Got : '%s'\n%s",typeid(Luna< b2DistanceOutput >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed int lret = self->iterations;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2DistanceOutput::pointA(b2Vec2 value)
	static int _bind_setPointA(lua_State *L) {
		if (!_lg_typecheck_setPointA(L)) {
			luaL_error(L, "luna typecheck failed in void b2DistanceOutput::pointA(b2Vec2 value) function, expected prototype:\nvoid b2DistanceOutput::pointA(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2DistanceOutput::pointA function");
		}
		b2Vec2 value=*value_ptr;

		b2DistanceOutput* self=(Luna< b2DistanceOutput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2DistanceOutput::pointA(b2Vec2). Got : '%s'\n%s",typeid(Luna< b2DistanceOutput >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pointA = value;

		return 0;
	}

	// void b2DistanceOutput::pointB(b2Vec2 value)
	static int _bind_setPointB(lua_State *L) {
		if (!_lg_typecheck_setPointB(L)) {
			luaL_error(L, "luna typecheck failed in void b2DistanceOutput::pointB(b2Vec2 value) function, expected prototype:\nvoid b2DistanceOutput::pointB(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2DistanceOutput::pointB function");
		}
		b2Vec2 value=*value_ptr;

		b2DistanceOutput* self=(Luna< b2DistanceOutput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2DistanceOutput::pointB(b2Vec2). Got : '%s'\n%s",typeid(Luna< b2DistanceOutput >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pointB = value;

		return 0;
	}

	// void b2DistanceOutput::distance(float value)
	static int _bind_setDistance(lua_State *L) {
		if (!_lg_typecheck_setDistance(L)) {
			luaL_error(L, "luna typecheck failed in void b2DistanceOutput::distance(float value) function, expected prototype:\nvoid b2DistanceOutput::distance(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2DistanceOutput* self=(Luna< b2DistanceOutput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2DistanceOutput::distance(float). Got : '%s'\n%s",typeid(Luna< b2DistanceOutput >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->distance = value;

		return 0;
	}

	// void b2DistanceOutput::iterations(signed int value)
	static int _bind_setIterations(lua_State *L) {
		if (!_lg_typecheck_setIterations(L)) {
			luaL_error(L, "luna typecheck failed in void b2DistanceOutput::iterations(signed int value) function, expected prototype:\nvoid b2DistanceOutput::iterations(signed int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2DistanceOutput* self=(Luna< b2DistanceOutput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2DistanceOutput::iterations(signed int). Got : '%s'\n%s",typeid(Luna< b2DistanceOutput >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->iterations = value;

		return 0;
	}


	// Operator binds:

};

b2DistanceOutput* LunaTraits< b2DistanceOutput >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2DistanceOutput >::_bind_dtor(b2DistanceOutput* obj) {
	delete obj;
}

const char LunaTraits< b2DistanceOutput >::className[] = "b2DistanceOutput";
const char LunaTraits< b2DistanceOutput >::fullName[] = "b2DistanceOutput";
const char LunaTraits< b2DistanceOutput >::moduleName[] = "box2d";
const char* LunaTraits< b2DistanceOutput >::parents[] = {0};
const int LunaTraits< b2DistanceOutput >::hash = 57509721;
const int LunaTraits< b2DistanceOutput >::uniqueIDs[] = {57509721,0};

luna_RegType LunaTraits< b2DistanceOutput >::methods[] = {
	{"getPointA", &luna_wrapper_b2DistanceOutput::_bind_getPointA},
	{"getPointB", &luna_wrapper_b2DistanceOutput::_bind_getPointB},
	{"getDistance", &luna_wrapper_b2DistanceOutput::_bind_getDistance},
	{"getIterations", &luna_wrapper_b2DistanceOutput::_bind_getIterations},
	{"setPointA", &luna_wrapper_b2DistanceOutput::_bind_setPointA},
	{"setPointB", &luna_wrapper_b2DistanceOutput::_bind_setPointB},
	{"setDistance", &luna_wrapper_b2DistanceOutput::_bind_setDistance},
	{"setIterations", &luna_wrapper_b2DistanceOutput::_bind_setIterations},
	{"dynCast", &luna_wrapper_b2DistanceOutput::_bind_dynCast},
	{"__eq", &luna_wrapper_b2DistanceOutput::_bind___eq},
	{"fromVoid", &luna_wrapper_b2DistanceOutput::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2DistanceOutput::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2DistanceOutput >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2DistanceOutput >::enumValues[] = {
	{0,0}
};


