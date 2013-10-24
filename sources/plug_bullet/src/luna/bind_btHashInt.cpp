#include <plug_common.h>

class luna_wrapper_btHashInt {
public:
	typedef Luna< btHashInt > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66360021) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btHashInt*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btHashInt* rhs =(Luna< btHashInt >::check(L,2));
		btHashInt* self=(Luna< btHashInt >::check(L,1));
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

		btHashInt* self= (btHashInt*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btHashInt >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66360021) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btHashInt >::check(L,1));
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

		btHashInt* self=(Luna< btHashInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btHashInt");
		
		return luna_dynamicCast(L,converters,"btHashInt",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getUid1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUid1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_equals(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,66360021) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHash(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btHashInt::btHashInt(int uid)
	static btHashInt* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in btHashInt::btHashInt(int uid) function, expected prototype:\nbtHashInt::btHashInt(int uid)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int uid=(int)lua_tointeger(L,1);

		return new btHashInt(uid);
	}


	// Function binds:
	// int btHashInt::getUid1() const
	static int _bind_getUid1(lua_State *L) {
		if (!_lg_typecheck_getUid1(L)) {
			luaL_error(L, "luna typecheck failed in int btHashInt::getUid1() const function, expected prototype:\nint btHashInt::getUid1() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHashInt* self=(Luna< btHashInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btHashInt::getUid1() const. Got : '%s'\n%s",typeid(Luna< btHashInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getUid1();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btHashInt::setUid1(int uid)
	static int _bind_setUid1(lua_State *L) {
		if (!_lg_typecheck_setUid1(L)) {
			luaL_error(L, "luna typecheck failed in void btHashInt::setUid1(int uid) function, expected prototype:\nvoid btHashInt::setUid1(int uid)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int uid=(int)lua_tointeger(L,2);

		btHashInt* self=(Luna< btHashInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHashInt::setUid1(int). Got : '%s'\n%s",typeid(Luna< btHashInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUid1(uid);

		return 0;
	}

	// bool btHashInt::equals(const btHashInt & other) const
	static int _bind_equals(lua_State *L) {
		if (!_lg_typecheck_equals(L)) {
			luaL_error(L, "luna typecheck failed in bool btHashInt::equals(const btHashInt & other) const function, expected prototype:\nbool btHashInt::equals(const btHashInt & other) const\nClass arguments details:\narg 1 ID = 66360021\n\n%s",luna_dumpStack(L).c_str());
		}

		const btHashInt* other_ptr=(Luna< btHashInt >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btHashInt::equals function");
		}
		const btHashInt & other=*other_ptr;

		btHashInt* self=(Luna< btHashInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btHashInt::equals(const btHashInt &) const. Got : '%s'\n%s",typeid(Luna< btHashInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->equals(other);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int btHashInt::getHash() const
	static int _bind_getHash(lua_State *L) {
		if (!_lg_typecheck_getHash(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int btHashInt::getHash() const function, expected prototype:\nunsigned int btHashInt::getHash() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHashInt* self=(Luna< btHashInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int btHashInt::getHash() const. Got : '%s'\n%s",typeid(Luna< btHashInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getHash();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btHashInt* LunaTraits< btHashInt >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btHashInt::_bind_ctor(L);
}

void LunaTraits< btHashInt >::_bind_dtor(btHashInt* obj) {
	delete obj;
}

const char LunaTraits< btHashInt >::className[] = "btHashInt";
const char LunaTraits< btHashInt >::fullName[] = "btHashInt";
const char LunaTraits< btHashInt >::moduleName[] = "bullet";
const char* LunaTraits< btHashInt >::parents[] = {0};
const int LunaTraits< btHashInt >::hash = 66360021;
const int LunaTraits< btHashInt >::uniqueIDs[] = {66360021,0};

luna_RegType LunaTraits< btHashInt >::methods[] = {
	{"getUid1", &luna_wrapper_btHashInt::_bind_getUid1},
	{"setUid1", &luna_wrapper_btHashInt::_bind_setUid1},
	{"equals", &luna_wrapper_btHashInt::_bind_equals},
	{"getHash", &luna_wrapper_btHashInt::_bind_getHash},
	{"dynCast", &luna_wrapper_btHashInt::_bind_dynCast},
	{"__eq", &luna_wrapper_btHashInt::_bind___eq},
	{"fromVoid", &luna_wrapper_btHashInt::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btHashInt::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btHashInt >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btHashInt >::enumValues[] = {
	{0,0}
};


