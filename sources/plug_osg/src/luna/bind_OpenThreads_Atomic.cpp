#include <plug_common.h>

class luna_wrapper_OpenThreads_Atomic {
public:
	typedef Luna< OpenThreads::Atomic > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53605181) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(OpenThreads::Atomic*)");
		}

		OpenThreads::Atomic* rhs =(Luna< OpenThreads::Atomic >::check(L,2));
		OpenThreads::Atomic* self=(Luna< OpenThreads::Atomic >::check(L,1));
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

		OpenThreads::Atomic* self= (OpenThreads::Atomic*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< OpenThreads::Atomic >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53605181) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< OpenThreads::Atomic >::check(L,1));
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

		OpenThreads::Atomic* self=(Luna< OpenThreads::Atomic >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("OpenThreads::Atomic");
		
		return luna_dynamicCast(L,converters,"OpenThreads::Atomic",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AND(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OR(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_XOR(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_exchange(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// OpenThreads::Atomic::Atomic(unsigned int value = 0)
	static OpenThreads::Atomic* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in OpenThreads::Atomic::Atomic(unsigned int value = 0) function, expected prototype:\nOpenThreads::Atomic::Atomic(unsigned int value = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned value=luatop>0 ? (unsigned)lua_tointeger(L,1) : 0;

		return new OpenThreads::Atomic(value);
	}


	// Function binds:
	// unsigned int OpenThreads::Atomic::AND(unsigned int value)
	static int _bind_AND(lua_State *L) {
		if (!_lg_typecheck_AND(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int OpenThreads::Atomic::AND(unsigned int value) function, expected prototype:\nunsigned int OpenThreads::Atomic::AND(unsigned int value)\nClass arguments details:\n");
		}

		unsigned value=(unsigned)lua_tointeger(L,2);

		OpenThreads::Atomic* self=(Luna< OpenThreads::Atomic >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int OpenThreads::Atomic::AND(unsigned int). Got : '%s'",typeid(Luna< OpenThreads::Atomic >::check(L,1)).name());
		}
		unsigned int lret = self->AND(value);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int OpenThreads::Atomic::OR(unsigned int value)
	static int _bind_OR(lua_State *L) {
		if (!_lg_typecheck_OR(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int OpenThreads::Atomic::OR(unsigned int value) function, expected prototype:\nunsigned int OpenThreads::Atomic::OR(unsigned int value)\nClass arguments details:\n");
		}

		unsigned value=(unsigned)lua_tointeger(L,2);

		OpenThreads::Atomic* self=(Luna< OpenThreads::Atomic >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int OpenThreads::Atomic::OR(unsigned int). Got : '%s'",typeid(Luna< OpenThreads::Atomic >::check(L,1)).name());
		}
		unsigned int lret = self->OR(value);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int OpenThreads::Atomic::XOR(unsigned int value)
	static int _bind_XOR(lua_State *L) {
		if (!_lg_typecheck_XOR(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int OpenThreads::Atomic::XOR(unsigned int value) function, expected prototype:\nunsigned int OpenThreads::Atomic::XOR(unsigned int value)\nClass arguments details:\n");
		}

		unsigned value=(unsigned)lua_tointeger(L,2);

		OpenThreads::Atomic* self=(Luna< OpenThreads::Atomic >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int OpenThreads::Atomic::XOR(unsigned int). Got : '%s'",typeid(Luna< OpenThreads::Atomic >::check(L,1)).name());
		}
		unsigned int lret = self->XOR(value);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int OpenThreads::Atomic::exchange(unsigned int value = 0)
	static int _bind_exchange(lua_State *L) {
		if (!_lg_typecheck_exchange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int OpenThreads::Atomic::exchange(unsigned int value = 0) function, expected prototype:\nunsigned int OpenThreads::Atomic::exchange(unsigned int value = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned value=luatop>1 ? (unsigned)lua_tointeger(L,2) : 0;

		OpenThreads::Atomic* self=(Luna< OpenThreads::Atomic >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int OpenThreads::Atomic::exchange(unsigned int). Got : '%s'",typeid(Luna< OpenThreads::Atomic >::check(L,1)).name());
		}
		unsigned int lret = self->exchange(value);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

OpenThreads::Atomic* LunaTraits< OpenThreads::Atomic >::_bind_ctor(lua_State *L) {
	return luna_wrapper_OpenThreads_Atomic::_bind_ctor(L);
}

void LunaTraits< OpenThreads::Atomic >::_bind_dtor(OpenThreads::Atomic* obj) {
	delete obj;
}

const char LunaTraits< OpenThreads::Atomic >::className[] = "Atomic";
const char LunaTraits< OpenThreads::Atomic >::fullName[] = "OpenThreads::Atomic";
const char LunaTraits< OpenThreads::Atomic >::moduleName[] = "OpenThreads";
const char* LunaTraits< OpenThreads::Atomic >::parents[] = {0};
const int LunaTraits< OpenThreads::Atomic >::hash = 53605181;
const int LunaTraits< OpenThreads::Atomic >::uniqueIDs[] = {53605181,0};

luna_RegType LunaTraits< OpenThreads::Atomic >::methods[] = {
	{"AND", &luna_wrapper_OpenThreads_Atomic::_bind_AND},
	{"OR", &luna_wrapper_OpenThreads_Atomic::_bind_OR},
	{"XOR", &luna_wrapper_OpenThreads_Atomic::_bind_XOR},
	{"exchange", &luna_wrapper_OpenThreads_Atomic::_bind_exchange},
	{"dynCast", &luna_wrapper_OpenThreads_Atomic::_bind_dynCast},
	{"__eq", &luna_wrapper_OpenThreads_Atomic::_bind___eq},
	{"fromVoid", &luna_wrapper_OpenThreads_Atomic::_bind_fromVoid},
	{"asVoid", &luna_wrapper_OpenThreads_Atomic::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< OpenThreads::Atomic >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< OpenThreads::Atomic >::enumValues[] = {
	{0,0}
};


