#include <plug_common.h>

class luna_wrapper_btHashString {
public:
	typedef Luna< btHashString > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23064786) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btHashString*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btHashString* rhs =(Luna< btHashString >::check(L,2));
		btHashString* self=(Luna< btHashString >::check(L,1));
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

		btHashString* self= (btHashString*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btHashString >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23064786) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btHashString >::check(L,1));
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

		btHashString* self=(Luna< btHashString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btHashString");
		
		return luna_dynamicCast(L,converters,"btHashString",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getHash(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_portableStringCompare(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_equals(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,23064786) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setHash(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btHashString::btHashString(const char * name)
	static btHashString* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in btHashString::btHashString(const char * name) function, expected prototype:\nbtHashString::btHashString(const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);

		return new btHashString(name);
	}


	// Function binds:
	// unsigned int btHashString::getHash() const
	static int _bind_getHash(lua_State *L) {
		if (!_lg_typecheck_getHash(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int btHashString::getHash() const function, expected prototype:\nunsigned int btHashString::getHash() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHashString* self=(Luna< btHashString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int btHashString::getHash() const. Got : '%s'\n%s",typeid(Luna< btHashString >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getHash();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btHashString::portableStringCompare(const char * src, const char * dst) const
	static int _bind_portableStringCompare(lua_State *L) {
		if (!_lg_typecheck_portableStringCompare(L)) {
			luaL_error(L, "luna typecheck failed in int btHashString::portableStringCompare(const char * src, const char * dst) const function, expected prototype:\nint btHashString::portableStringCompare(const char * src, const char * dst) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * src=(const char *)lua_tostring(L,2);
		const char * dst=(const char *)lua_tostring(L,3);

		btHashString* self=(Luna< btHashString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btHashString::portableStringCompare(const char *, const char *) const. Got : '%s'\n%s",typeid(Luna< btHashString >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->portableStringCompare(src, dst);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btHashString::equals(const btHashString & other) const
	static int _bind_equals(lua_State *L) {
		if (!_lg_typecheck_equals(L)) {
			luaL_error(L, "luna typecheck failed in bool btHashString::equals(const btHashString & other) const function, expected prototype:\nbool btHashString::equals(const btHashString & other) const\nClass arguments details:\narg 1 ID = 23064786\n\n%s",luna_dumpStack(L).c_str());
		}

		const btHashString* other_ptr=(Luna< btHashString >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btHashString::equals function");
		}
		const btHashString & other=*other_ptr;

		btHashString* self=(Luna< btHashString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btHashString::equals(const btHashString &) const. Got : '%s'\n%s",typeid(Luna< btHashString >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->equals(other);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * btHashString::m_string()
	static int _bind_getString(lua_State *L) {
		if (!_lg_typecheck_getString(L)) {
			luaL_error(L, "luna typecheck failed in const char * btHashString::m_string() function, expected prototype:\nconst char * btHashString::m_string()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHashString* self=(Luna< btHashString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * btHashString::m_string(). Got : '%s'\n%s",typeid(Luna< btHashString >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->m_string;
		lua_pushstring(L,lret);

		return 1;
	}

	// void btHashString::m_hash(unsigned int value)
	static int _bind_setHash(lua_State *L) {
		if (!_lg_typecheck_setHash(L)) {
			luaL_error(L, "luna typecheck failed in void btHashString::m_hash(unsigned int value) function, expected prototype:\nvoid btHashString::m_hash(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		btHashString* self=(Luna< btHashString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHashString::m_hash(unsigned int). Got : '%s'\n%s",typeid(Luna< btHashString >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_hash = value;

		return 0;
	}


	// Operator binds:

};

btHashString* LunaTraits< btHashString >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btHashString::_bind_ctor(L);
}

void LunaTraits< btHashString >::_bind_dtor(btHashString* obj) {
	delete obj;
}

const char LunaTraits< btHashString >::className[] = "btHashString";
const char LunaTraits< btHashString >::fullName[] = "btHashString";
const char LunaTraits< btHashString >::moduleName[] = "bullet";
const char* LunaTraits< btHashString >::parents[] = {0};
const int LunaTraits< btHashString >::hash = 23064786;
const int LunaTraits< btHashString >::uniqueIDs[] = {23064786,0};

luna_RegType LunaTraits< btHashString >::methods[] = {
	{"getHash", &luna_wrapper_btHashString::_bind_getHash},
	{"portableStringCompare", &luna_wrapper_btHashString::_bind_portableStringCompare},
	{"equals", &luna_wrapper_btHashString::_bind_equals},
	{"getString", &luna_wrapper_btHashString::_bind_getString},
	{"setHash", &luna_wrapper_btHashString::_bind_setHash},
	{"dynCast", &luna_wrapper_btHashString::_bind_dynCast},
	{"__eq", &luna_wrapper_btHashString::_bind___eq},
	{"fromVoid", &luna_wrapper_btHashString::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btHashString::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btHashString >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btHashString >::enumValues[] = {
	{0,0}
};


