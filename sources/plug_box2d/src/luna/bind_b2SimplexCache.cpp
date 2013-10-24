#include <plug_common.h>

class luna_wrapper_b2SimplexCache {
public:
	typedef Luna< b2SimplexCache > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65613863) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2SimplexCache*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2SimplexCache* rhs =(Luna< b2SimplexCache >::check(L,2));
		b2SimplexCache* self=(Luna< b2SimplexCache >::check(L,1));
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

		b2SimplexCache* self= (b2SimplexCache*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2SimplexCache >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65613863) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< b2SimplexCache >::check(L,1));
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

		b2SimplexCache* self=(Luna< b2SimplexCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2SimplexCache");
		
		return luna_dynamicCast(L,converters,"b2SimplexCache",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getMetric(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMetric(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// float b2SimplexCache::metric()
	static int _bind_getMetric(lua_State *L) {
		if (!_lg_typecheck_getMetric(L)) {
			luaL_error(L, "luna typecheck failed in float b2SimplexCache::metric() function, expected prototype:\nfloat b2SimplexCache::metric()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2SimplexCache* self=(Luna< b2SimplexCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2SimplexCache::metric(). Got : '%s'\n%s",typeid(Luna< b2SimplexCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->metric;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short b2SimplexCache::count()
	static int _bind_getCount(lua_State *L) {
		if (!_lg_typecheck_getCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short b2SimplexCache::count() function, expected prototype:\nunsigned short b2SimplexCache::count()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2SimplexCache* self=(Luna< b2SimplexCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short b2SimplexCache::count(). Got : '%s'\n%s",typeid(Luna< b2SimplexCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->count;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2SimplexCache::metric(float value)
	static int _bind_setMetric(lua_State *L) {
		if (!_lg_typecheck_setMetric(L)) {
			luaL_error(L, "luna typecheck failed in void b2SimplexCache::metric(float value) function, expected prototype:\nvoid b2SimplexCache::metric(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2SimplexCache* self=(Luna< b2SimplexCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2SimplexCache::metric(float). Got : '%s'\n%s",typeid(Luna< b2SimplexCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->metric = value;

		return 0;
	}

	// void b2SimplexCache::count(unsigned short value)
	static int _bind_setCount(lua_State *L) {
		if (!_lg_typecheck_setCount(L)) {
			luaL_error(L, "luna typecheck failed in void b2SimplexCache::count(unsigned short value) function, expected prototype:\nvoid b2SimplexCache::count(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		b2SimplexCache* self=(Luna< b2SimplexCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2SimplexCache::count(unsigned short). Got : '%s'\n%s",typeid(Luna< b2SimplexCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->count = value;

		return 0;
	}


	// Operator binds:

};

b2SimplexCache* LunaTraits< b2SimplexCache >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2SimplexCache >::_bind_dtor(b2SimplexCache* obj) {
	delete obj;
}

const char LunaTraits< b2SimplexCache >::className[] = "b2SimplexCache";
const char LunaTraits< b2SimplexCache >::fullName[] = "b2SimplexCache";
const char LunaTraits< b2SimplexCache >::moduleName[] = "box2d";
const char* LunaTraits< b2SimplexCache >::parents[] = {0};
const int LunaTraits< b2SimplexCache >::hash = 65613863;
const int LunaTraits< b2SimplexCache >::uniqueIDs[] = {65613863,0};

luna_RegType LunaTraits< b2SimplexCache >::methods[] = {
	{"getMetric", &luna_wrapper_b2SimplexCache::_bind_getMetric},
	{"getCount", &luna_wrapper_b2SimplexCache::_bind_getCount},
	{"setMetric", &luna_wrapper_b2SimplexCache::_bind_setMetric},
	{"setCount", &luna_wrapper_b2SimplexCache::_bind_setCount},
	{"dynCast", &luna_wrapper_b2SimplexCache::_bind_dynCast},
	{"__eq", &luna_wrapper_b2SimplexCache::_bind___eq},
	{"fromVoid", &luna_wrapper_b2SimplexCache::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2SimplexCache::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2SimplexCache >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2SimplexCache >::enumValues[] = {
	{0,0}
};


