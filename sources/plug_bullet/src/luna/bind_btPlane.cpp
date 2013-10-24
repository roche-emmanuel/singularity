#include <plug_common.h>

class luna_wrapper_btPlane {
public:
	typedef Luna< btPlane > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,73532668) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btPlane*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btPlane* rhs =(Luna< btPlane >::check(L,2));
		btPlane* self=(Luna< btPlane >::check(L,1));
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

		btPlane* self= (btPlane*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btPlane >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,73532668) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btPlane >::check(L,1));
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

		btPlane* self=(Luna< btPlane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btPlane");
		
		return luna_dynamicCast(L,converters,"btPlane",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,1))) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDist(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDist(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btPlane::btPlane(const btVector3 & n, float d)
	static btPlane* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btPlane::btPlane(const btVector3 & n, float d) function, expected prototype:\nbtPlane::btPlane(const btVector3 & n, float d)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* n_ptr=(Luna< btVector3 >::check(L,1));
		if( !n_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg n in btPlane::btPlane function");
		}
		const btVector3 & n=*n_ptr;
		float d=(float)lua_tonumber(L,2);

		return new btPlane(n, d);
	}

	// btPlane::btPlane()
	static btPlane* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in btPlane::btPlane() function, expected prototype:\nbtPlane::btPlane()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new btPlane();
	}

	// Overload binder for btPlane::btPlane
	static btPlane* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btPlane, cannot match any of the overloads for function btPlane:\n  btPlane(const btVector3 &, float)\n  btPlane()\n");
		return NULL;
	}


	// Function binds:
	// btVector3 btPlane::normal()
	static int _bind_getNormal(lua_State *L) {
		if (!_lg_typecheck_getNormal(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btPlane::normal() function, expected prototype:\nbtVector3 btPlane::normal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btPlane* self=(Luna< btPlane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btPlane::normal(). Got : '%s'\n%s",typeid(Luna< btPlane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->normal;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btPlane::dist()
	static int _bind_getDist(lua_State *L) {
		if (!_lg_typecheck_getDist(L)) {
			luaL_error(L, "luna typecheck failed in float btPlane::dist() function, expected prototype:\nfloat btPlane::dist()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btPlane* self=(Luna< btPlane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btPlane::dist(). Got : '%s'\n%s",typeid(Luna< btPlane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->dist;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btPlane::normal(btVector3 value)
	static int _bind_setNormal(lua_State *L) {
		if (!_lg_typecheck_setNormal(L)) {
			luaL_error(L, "luna typecheck failed in void btPlane::normal(btVector3 value) function, expected prototype:\nvoid btPlane::normal(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btPlane::normal function");
		}
		btVector3 value=*value_ptr;

		btPlane* self=(Luna< btPlane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btPlane::normal(btVector3). Got : '%s'\n%s",typeid(Luna< btPlane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->normal = value;

		return 0;
	}

	// void btPlane::dist(float value)
	static int _bind_setDist(lua_State *L) {
		if (!_lg_typecheck_setDist(L)) {
			luaL_error(L, "luna typecheck failed in void btPlane::dist(float value) function, expected prototype:\nvoid btPlane::dist(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btPlane* self=(Luna< btPlane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btPlane::dist(float). Got : '%s'\n%s",typeid(Luna< btPlane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dist = value;

		return 0;
	}


	// Operator binds:

};

btPlane* LunaTraits< btPlane >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btPlane::_bind_ctor(L);
}

void LunaTraits< btPlane >::_bind_dtor(btPlane* obj) {
	delete obj;
}

const char LunaTraits< btPlane >::className[] = "btPlane";
const char LunaTraits< btPlane >::fullName[] = "btPlane";
const char LunaTraits< btPlane >::moduleName[] = "bullet";
const char* LunaTraits< btPlane >::parents[] = {0};
const int LunaTraits< btPlane >::hash = 73532668;
const int LunaTraits< btPlane >::uniqueIDs[] = {73532668,0};

luna_RegType LunaTraits< btPlane >::methods[] = {
	{"getNormal", &luna_wrapper_btPlane::_bind_getNormal},
	{"getDist", &luna_wrapper_btPlane::_bind_getDist},
	{"setNormal", &luna_wrapper_btPlane::_bind_setNormal},
	{"setDist", &luna_wrapper_btPlane::_bind_setDist},
	{"dynCast", &luna_wrapper_btPlane::_bind_dynCast},
	{"__eq", &luna_wrapper_btPlane::_bind___eq},
	{"fromVoid", &luna_wrapper_btPlane::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btPlane::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btPlane >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btPlane >::enumValues[] = {
	{0,0}
};


