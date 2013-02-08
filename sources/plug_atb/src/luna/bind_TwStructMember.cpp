#include <plug_common.h>

class luna_wrapper_TwStructMember {
public:
	typedef Luna< TwStructMember > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50602391) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(TwStructMember*)");
		}

		TwStructMember* rhs =(Luna< TwStructMember >::check(L,2));
		TwStructMember* self=(Luna< TwStructMember >::check(L,1));
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

		TwStructMember* self= (TwStructMember*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< TwStructMember >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50602391) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< TwStructMember >::check(L,1));
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

		TwStructMember* self=(Luna< TwStructMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("TwStructMember");
		
		return luna_dynamicCast(L,converters,"TwStructMember",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDefString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// const char * TwStructMember::Name()
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * TwStructMember::Name() function, expected prototype:\nconst char * TwStructMember::Name()\nClass arguments details:\n");
		}


		TwStructMember* self=(Luna< TwStructMember >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * TwStructMember::Name(). Got : '%s'",typeid(Luna< TwStructMember >::check(L,1)).name());
		}
		const char * lret = self->Name;
		lua_pushstring(L,lret);

		return 1;
	}

	// TwType TwStructMember::Type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in TwType TwStructMember::Type() function, expected prototype:\nTwType TwStructMember::Type()\nClass arguments details:\n");
		}


		TwStructMember* self=(Luna< TwStructMember >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call TwType TwStructMember::Type(). Got : '%s'",typeid(Luna< TwStructMember >::check(L,1)).name());
		}
		TwType lret = self->Type;
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t TwStructMember::Offset()
	static int _bind_getOffset(lua_State *L) {
		if (!_lg_typecheck_getOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t TwStructMember::Offset() function, expected prototype:\nsize_t TwStructMember::Offset()\nClass arguments details:\n");
		}


		TwStructMember* self=(Luna< TwStructMember >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t TwStructMember::Offset(). Got : '%s'",typeid(Luna< TwStructMember >::check(L,1)).name());
		}
		size_t lret = self->Offset;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * TwStructMember::DefString()
	static int _bind_getDefString(lua_State *L) {
		if (!_lg_typecheck_getDefString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * TwStructMember::DefString() function, expected prototype:\nconst char * TwStructMember::DefString()\nClass arguments details:\n");
		}


		TwStructMember* self=(Luna< TwStructMember >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * TwStructMember::DefString(). Got : '%s'",typeid(Luna< TwStructMember >::check(L,1)).name());
		}
		const char * lret = self->DefString;
		lua_pushstring(L,lret);

		return 1;
	}

	// void TwStructMember::Type(TwType value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void TwStructMember::Type(TwType value) function, expected prototype:\nvoid TwStructMember::Type(TwType value)\nClass arguments details:\n");
		}

		TwType value=(TwType)lua_tointeger(L,2);

		TwStructMember* self=(Luna< TwStructMember >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void TwStructMember::Type(TwType). Got : '%s'",typeid(Luna< TwStructMember >::check(L,1)).name());
		}
		self->Type = value;

		return 0;
	}

	// void TwStructMember::Offset(size_t value)
	static int _bind_setOffset(lua_State *L) {
		if (!_lg_typecheck_setOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void TwStructMember::Offset(size_t value) function, expected prototype:\nvoid TwStructMember::Offset(size_t value)\nClass arguments details:\n");
		}

		size_t value=(size_t)lua_tointeger(L,2);

		TwStructMember* self=(Luna< TwStructMember >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void TwStructMember::Offset(size_t). Got : '%s'",typeid(Luna< TwStructMember >::check(L,1)).name());
		}
		self->Offset = value;

		return 0;
	}


	// Operator binds:

};

TwStructMember* LunaTraits< TwStructMember >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< TwStructMember >::_bind_dtor(TwStructMember* obj) {
	delete obj;
}

const char LunaTraits< TwStructMember >::className[] = "TwStructMember";
const char LunaTraits< TwStructMember >::fullName[] = "TwStructMember";
const char LunaTraits< TwStructMember >::moduleName[] = "atb";
const char* LunaTraits< TwStructMember >::parents[] = {0};
const int LunaTraits< TwStructMember >::hash = 50602391;
const int LunaTraits< TwStructMember >::uniqueIDs[] = {50602391,0};

luna_RegType LunaTraits< TwStructMember >::methods[] = {
	{"getName", &luna_wrapper_TwStructMember::_bind_getName},
	{"getType", &luna_wrapper_TwStructMember::_bind_getType},
	{"getOffset", &luna_wrapper_TwStructMember::_bind_getOffset},
	{"getDefString", &luna_wrapper_TwStructMember::_bind_getDefString},
	{"setType", &luna_wrapper_TwStructMember::_bind_setType},
	{"setOffset", &luna_wrapper_TwStructMember::_bind_setOffset},
	{"dynCast", &luna_wrapper_TwStructMember::_bind_dynCast},
	{"__eq", &luna_wrapper_TwStructMember::_bind___eq},
	{"fromVoid", &luna_wrapper_TwStructMember::_bind_fromVoid},
	{"asVoid", &luna_wrapper_TwStructMember::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< TwStructMember >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< TwStructMember >::enumValues[] = {
	{0,0}
};


