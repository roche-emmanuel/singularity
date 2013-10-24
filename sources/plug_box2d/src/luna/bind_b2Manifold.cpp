#include <plug_common.h>

class luna_wrapper_b2Manifold {
public:
	typedef Luna< b2Manifold > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,73405450) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Manifold*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2Manifold* rhs =(Luna< b2Manifold >::check(L,2));
		b2Manifold* self=(Luna< b2Manifold >::check(L,1));
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

		b2Manifold* self= (b2Manifold*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2Manifold >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,73405450) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< b2Manifold >::check(L,1));
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

		b2Manifold* self=(Luna< b2Manifold >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Manifold");
		
		return luna_dynamicCast(L,converters,"b2Manifold",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getLocalNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPointCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLocalNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPointCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2Vec2 b2Manifold::localNormal()
	static int _bind_getLocalNormal(lua_State *L) {
		if (!_lg_typecheck_getLocalNormal(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Manifold::localNormal() function, expected prototype:\nb2Vec2 b2Manifold::localNormal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Manifold* self=(Luna< b2Manifold >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2Manifold::localNormal(). Got : '%s'\n%s",typeid(Luna< b2Manifold >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->localNormal;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2Manifold::localPoint()
	static int _bind_getLocalPoint(lua_State *L) {
		if (!_lg_typecheck_getLocalPoint(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Manifold::localPoint() function, expected prototype:\nb2Vec2 b2Manifold::localPoint()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Manifold* self=(Luna< b2Manifold >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2Manifold::localPoint(). Got : '%s'\n%s",typeid(Luna< b2Manifold >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->localPoint;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Manifold::Type b2Manifold::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in b2Manifold::Type b2Manifold::type() function, expected prototype:\nb2Manifold::Type b2Manifold::type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Manifold* self=(Luna< b2Manifold >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Manifold::Type b2Manifold::type(). Got : '%s'\n%s",typeid(Luna< b2Manifold >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		b2Manifold::Type lret = self->type;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2Manifold::pointCount()
	static int _bind_getPointCount(lua_State *L) {
		if (!_lg_typecheck_getPointCount(L)) {
			luaL_error(L, "luna typecheck failed in signed int b2Manifold::pointCount() function, expected prototype:\nsigned int b2Manifold::pointCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Manifold* self=(Luna< b2Manifold >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed int b2Manifold::pointCount(). Got : '%s'\n%s",typeid(Luna< b2Manifold >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed int lret = self->pointCount;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Manifold::localNormal(b2Vec2 value)
	static int _bind_setLocalNormal(lua_State *L) {
		if (!_lg_typecheck_setLocalNormal(L)) {
			luaL_error(L, "luna typecheck failed in void b2Manifold::localNormal(b2Vec2 value) function, expected prototype:\nvoid b2Manifold::localNormal(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2Manifold::localNormal function");
		}
		b2Vec2 value=*value_ptr;

		b2Manifold* self=(Luna< b2Manifold >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Manifold::localNormal(b2Vec2). Got : '%s'\n%s",typeid(Luna< b2Manifold >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->localNormal = value;

		return 0;
	}

	// void b2Manifold::localPoint(b2Vec2 value)
	static int _bind_setLocalPoint(lua_State *L) {
		if (!_lg_typecheck_setLocalPoint(L)) {
			luaL_error(L, "luna typecheck failed in void b2Manifold::localPoint(b2Vec2 value) function, expected prototype:\nvoid b2Manifold::localPoint(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2Manifold::localPoint function");
		}
		b2Vec2 value=*value_ptr;

		b2Manifold* self=(Luna< b2Manifold >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Manifold::localPoint(b2Vec2). Got : '%s'\n%s",typeid(Luna< b2Manifold >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->localPoint = value;

		return 0;
	}

	// void b2Manifold::type(b2Manifold::Type value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void b2Manifold::type(b2Manifold::Type value) function, expected prototype:\nvoid b2Manifold::type(b2Manifold::Type value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Manifold::Type value=(b2Manifold::Type)lua_tointeger(L,2);

		b2Manifold* self=(Luna< b2Manifold >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Manifold::type(b2Manifold::Type). Got : '%s'\n%s",typeid(Luna< b2Manifold >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->type = value;

		return 0;
	}

	// void b2Manifold::pointCount(signed int value)
	static int _bind_setPointCount(lua_State *L) {
		if (!_lg_typecheck_setPointCount(L)) {
			luaL_error(L, "luna typecheck failed in void b2Manifold::pointCount(signed int value) function, expected prototype:\nvoid b2Manifold::pointCount(signed int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2Manifold* self=(Luna< b2Manifold >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Manifold::pointCount(signed int). Got : '%s'\n%s",typeid(Luna< b2Manifold >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pointCount = value;

		return 0;
	}


	// Operator binds:

};

b2Manifold* LunaTraits< b2Manifold >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2Manifold >::_bind_dtor(b2Manifold* obj) {
	delete obj;
}

const char LunaTraits< b2Manifold >::className[] = "b2Manifold";
const char LunaTraits< b2Manifold >::fullName[] = "b2Manifold";
const char LunaTraits< b2Manifold >::moduleName[] = "box2d";
const char* LunaTraits< b2Manifold >::parents[] = {0};
const int LunaTraits< b2Manifold >::hash = 73405450;
const int LunaTraits< b2Manifold >::uniqueIDs[] = {73405450,0};

luna_RegType LunaTraits< b2Manifold >::methods[] = {
	{"getLocalNormal", &luna_wrapper_b2Manifold::_bind_getLocalNormal},
	{"getLocalPoint", &luna_wrapper_b2Manifold::_bind_getLocalPoint},
	{"getType", &luna_wrapper_b2Manifold::_bind_getType},
	{"getPointCount", &luna_wrapper_b2Manifold::_bind_getPointCount},
	{"setLocalNormal", &luna_wrapper_b2Manifold::_bind_setLocalNormal},
	{"setLocalPoint", &luna_wrapper_b2Manifold::_bind_setLocalPoint},
	{"setType", &luna_wrapper_b2Manifold::_bind_setType},
	{"setPointCount", &luna_wrapper_b2Manifold::_bind_setPointCount},
	{"dynCast", &luna_wrapper_b2Manifold::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Manifold::_bind___eq},
	{"fromVoid", &luna_wrapper_b2Manifold::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2Manifold::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2Manifold >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Manifold >::enumValues[] = {
	{"e_circles", b2Manifold::e_circles},
	{"e_faceA", b2Manifold::e_faceA},
	{"e_faceB", b2Manifold::e_faceB},
	{0,0}
};


