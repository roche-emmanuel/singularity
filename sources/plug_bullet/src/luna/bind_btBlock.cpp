#include <plug_common.h>

class luna_wrapper_btBlock {
public:
	typedef Luna< btBlock > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60616493) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btBlock*)");
		}

		btBlock* rhs =(Luna< btBlock >::check(L,2));
		btBlock* self=(Luna< btBlock >::check(L,1));
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

		btBlock* self= (btBlock*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btBlock >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60616493) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btBlock >::check(L,1));
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

		btBlock* self=(Luna< btBlock >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btBlock");
		
		return luna_dynamicCast(L,converters,"btBlock",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getPrevious(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAddress(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPrevious(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,60616493)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAddress(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btBlock * btBlock::previous()
	static int _bind_getPrevious(lua_State *L) {
		if (!_lg_typecheck_getPrevious(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBlock * btBlock::previous() function, expected prototype:\nbtBlock * btBlock::previous()\nClass arguments details:\n");
		}


		btBlock* self=(Luna< btBlock >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBlock * btBlock::previous(). Got : '%s'",typeid(Luna< btBlock >::check(L,1)).name());
		}
		btBlock * lret = self->previous;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBlock >::push(L,lret,false);

		return 1;
	}

	// unsigned char * btBlock::address()
	static int _bind_getAddress(lua_State *L) {
		if (!_lg_typecheck_getAddress(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char * btBlock::address() function, expected prototype:\nunsigned char * btBlock::address()\nClass arguments details:\n");
		}


		btBlock* self=(Luna< btBlock >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char * btBlock::address(). Got : '%s'",typeid(Luna< btBlock >::check(L,1)).name());
		}
		unsigned char * lret = self->address;
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// void btBlock::previous(btBlock * value)
	static int _bind_setPrevious(lua_State *L) {
		if (!_lg_typecheck_setPrevious(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBlock::previous(btBlock * value) function, expected prototype:\nvoid btBlock::previous(btBlock * value)\nClass arguments details:\narg 1 ID = 60616493\n");
		}

		btBlock* value=(Luna< btBlock >::check(L,2));

		btBlock* self=(Luna< btBlock >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBlock::previous(btBlock *). Got : '%s'",typeid(Luna< btBlock >::check(L,1)).name());
		}
		self->previous = value;

		return 0;
	}

	// void btBlock::address(unsigned char * value)
	static int _bind_setAddress(lua_State *L) {
		if (!_lg_typecheck_setAddress(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBlock::address(unsigned char * value) function, expected prototype:\nvoid btBlock::address(unsigned char * value)\nClass arguments details:\n");
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		btBlock* self=(Luna< btBlock >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBlock::address(unsigned char *). Got : '%s'",typeid(Luna< btBlock >::check(L,1)).name());
		}
		self->address = &value;

		return 0;
	}


	// Operator binds:

};

btBlock* LunaTraits< btBlock >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btBlock >::_bind_dtor(btBlock* obj) {
	delete obj;
}

const char LunaTraits< btBlock >::className[] = "btBlock";
const char LunaTraits< btBlock >::fullName[] = "btBlock";
const char LunaTraits< btBlock >::moduleName[] = "bullet";
const char* LunaTraits< btBlock >::parents[] = {0};
const int LunaTraits< btBlock >::hash = 60616493;
const int LunaTraits< btBlock >::uniqueIDs[] = {60616493,0};

luna_RegType LunaTraits< btBlock >::methods[] = {
	{"getPrevious", &luna_wrapper_btBlock::_bind_getPrevious},
	{"getAddress", &luna_wrapper_btBlock::_bind_getAddress},
	{"setPrevious", &luna_wrapper_btBlock::_bind_setPrevious},
	{"setAddress", &luna_wrapper_btBlock::_bind_setAddress},
	{"dynCast", &luna_wrapper_btBlock::_bind_dynCast},
	{"__eq", &luna_wrapper_btBlock::_bind___eq},
	{"fromVoid", &luna_wrapper_btBlock::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btBlock::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btBlock >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btBlock >::enumValues[] = {
	{0,0}
};


