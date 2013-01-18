#include <plug_common.h>

class luna_wrapper_b2Pair {
public:
	typedef Luna< b2Pair > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,54312546) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Pair*)");
		}

		b2Pair* rhs =(Luna< b2Pair >::check(L,2));
		b2Pair* self=(Luna< b2Pair >::check(L,1));
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

		b2Pair* self= (b2Pair*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2Pair >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,54312546) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2Pair >::check(L,1));
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

		b2Pair* self=(Luna< b2Pair >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Pair");
		
		return luna_dynamicCast(L,converters,"b2Pair",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getProxyIdA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProxyIdB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setProxyIdA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setProxyIdB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// signed int b2Pair::proxyIdA()
	static int _bind_getProxyIdA(lua_State *L) {
		if (!_lg_typecheck_getProxyIdA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2Pair::proxyIdA() function, expected prototype:\nsigned int b2Pair::proxyIdA()\nClass arguments details:\n");
		}


		b2Pair* self=(Luna< b2Pair >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2Pair::proxyIdA(). Got : '%s'",typeid(Luna< b2Pair >::check(L,1)).name());
		}
		signed int lret = self->proxyIdA;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2Pair::proxyIdB()
	static int _bind_getProxyIdB(lua_State *L) {
		if (!_lg_typecheck_getProxyIdB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2Pair::proxyIdB() function, expected prototype:\nsigned int b2Pair::proxyIdB()\nClass arguments details:\n");
		}


		b2Pair* self=(Luna< b2Pair >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2Pair::proxyIdB(). Got : '%s'",typeid(Luna< b2Pair >::check(L,1)).name());
		}
		signed int lret = self->proxyIdB;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2Pair::next()
	static int _bind_getNext(lua_State *L) {
		if (!_lg_typecheck_getNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2Pair::next() function, expected prototype:\nsigned int b2Pair::next()\nClass arguments details:\n");
		}


		b2Pair* self=(Luna< b2Pair >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2Pair::next(). Got : '%s'",typeid(Luna< b2Pair >::check(L,1)).name());
		}
		signed int lret = self->next;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Pair::proxyIdA(signed int value)
	static int _bind_setProxyIdA(lua_State *L) {
		if (!_lg_typecheck_setProxyIdA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Pair::proxyIdA(signed int value) function, expected prototype:\nvoid b2Pair::proxyIdA(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2Pair* self=(Luna< b2Pair >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Pair::proxyIdA(signed int). Got : '%s'",typeid(Luna< b2Pair >::check(L,1)).name());
		}
		self->proxyIdA = value;

		return 0;
	}

	// void b2Pair::proxyIdB(signed int value)
	static int _bind_setProxyIdB(lua_State *L) {
		if (!_lg_typecheck_setProxyIdB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Pair::proxyIdB(signed int value) function, expected prototype:\nvoid b2Pair::proxyIdB(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2Pair* self=(Luna< b2Pair >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Pair::proxyIdB(signed int). Got : '%s'",typeid(Luna< b2Pair >::check(L,1)).name());
		}
		self->proxyIdB = value;

		return 0;
	}

	// void b2Pair::next(signed int value)
	static int _bind_setNext(lua_State *L) {
		if (!_lg_typecheck_setNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Pair::next(signed int value) function, expected prototype:\nvoid b2Pair::next(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2Pair* self=(Luna< b2Pair >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Pair::next(signed int). Got : '%s'",typeid(Luna< b2Pair >::check(L,1)).name());
		}
		self->next = value;

		return 0;
	}


	// Operator binds:

};

b2Pair* LunaTraits< b2Pair >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2Pair >::_bind_dtor(b2Pair* obj) {
	delete obj;
}

const char LunaTraits< b2Pair >::className[] = "b2Pair";
const char LunaTraits< b2Pair >::fullName[] = "b2Pair";
const char LunaTraits< b2Pair >::moduleName[] = "box2d";
const char* LunaTraits< b2Pair >::parents[] = {0};
const int LunaTraits< b2Pair >::hash = 54312546;
const int LunaTraits< b2Pair >::uniqueIDs[] = {54312546,0};

luna_RegType LunaTraits< b2Pair >::methods[] = {
	{"getProxyIdA", &luna_wrapper_b2Pair::_bind_getProxyIdA},
	{"getProxyIdB", &luna_wrapper_b2Pair::_bind_getProxyIdB},
	{"getNext", &luna_wrapper_b2Pair::_bind_getNext},
	{"setProxyIdA", &luna_wrapper_b2Pair::_bind_setProxyIdA},
	{"setProxyIdB", &luna_wrapper_b2Pair::_bind_setProxyIdB},
	{"setNext", &luna_wrapper_b2Pair::_bind_setNext},
	{"dynCast", &luna_wrapper_b2Pair::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Pair::_bind___eq},
	{"fromVoid", &luna_wrapper_b2Pair::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2Pair::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2Pair >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Pair >::enumValues[] = {
	{0,0}
};


